OUTPUT_FORMAT("elf64-x86-64", "elf64-x86-64", "elf64-x86-64")
OUTPUT_ARCH(i386:x86-64)

ENTRY(_start)

PHDRS
{
   code_seg PT_LOAD;
   data_seg PT_LOAD;
}

stack_size = 2048;
_stack_start = 0x2DCD930;
_stack_end = _stack_start - stack_size;

SECTIONS
{
	. = 0x2B9D2A0;
	.text : {
		*(.text.start)
		*(.text*)
	} : code_seg
	.rodata : { *(.rodata) *(.rodata*) } : code_seg

	. = _stack_end;
	.data : { *(.data) } : data_seg
	.bss  : { *(.bss) }  : data_seg
}
