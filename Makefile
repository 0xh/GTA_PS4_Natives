PS4SDK	 := $(PS4SDK2)/libPS4

CC		 := gcc
AS		 := gcc
OBJCOPY	 :=	objcopy
ODIR	 :=	build
SDIR	 :=	source
IDIRS	 :=	-Iinclude -I$(PS4SDK)/include
LDIRS	 :=	-Llib -L$(PS4SDK)
CFLAGS	 :=	$(IDIRS) $(LDIRS) -O3 -s -w -std=gnu++11 -fno-builtin -nostartfiles -nostdlib -masm=intel -march=btver2 -mtune=btver2 -m64 -mabi=sysv -mcmodel=large -fpermissive
LFLAGS	 :=	-Xlinker -T linker.x -Wl,--build-id=none
CFILES	 :=	$(wildcard $(SDIR)/*.cpp)
SFILES	 :=	$(wildcard $(SDIR)/*.s)
OBJS	 :=	$(patsubst $(SDIR)/%.cpp, $(ODIR)/%.o, $(CFILES)) $(patsubst $(SDIR)/%.s, $(ODIR)/%.o, $(SFILES))

LIBS	 := #-lPS4

TARGET = plugin1.bin

$(TARGET): $(ODIR) $(OBJS)
	$(CC) crt0.s $(ODIR)/*.o -o temp.t $(CFLAGS) $(LFLAGS) $(LIBS)
	$(OBJCOPY) -O binary temp.t $(TARGET)
	rm -f temp.t

$(ODIR)/%.o: $(SDIR)/%.cpp
	$(CC) -c -o $@ $< $(CFLAGS)

$(ODIR)/%.o: $(SDIR)/%.s
	$(AS) -c -o $@ $< $(SFLAGS)

$(ODIR):
	@mkdir $@

.PHONY: clean

clean:
	rm -f $(TARGET) $(ODIR)/*.o