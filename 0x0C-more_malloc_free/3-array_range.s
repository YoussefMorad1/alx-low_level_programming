	.file	"3-array_range.c"
	.text
	.globl	array_range
	.type	array_range, @function
array_range:
.LFB6:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$32, %rsp
	movl	%edi, -20(%rbp)
	movl	%esi, -24(%rbp)
	movl	-20(%rbp), %eax
	movl	%eax, -12(%rbp)
	movl	-20(%rbp), %eax
	cmpl	-24(%rbp), %eax
	jle	.L2
	movl	$0, %eax
	jmp	.L3
.L2:
	movl	-24(%rbp), %eax
	subl	-20(%rbp), %eax
	addl	$1, %eax
	cltq
	salq	$2, %rax
	movq	%rax, %rdi
	call	malloc@PLT
	movq	%rax, -8(%rbp)
	cmpq	$0, -8(%rbp)
	jne	.L5
	movl	$0, %eax
	jmp	.L3
.L6:
	movl	-12(%rbp), %eax
	subl	-20(%rbp), %eax
	cltq
	leaq	0(,%rax,4), %rdx
	movq	-8(%rbp), %rax
	addq	%rax, %rdx
	movl	-12(%rbp), %eax
	movl	%eax, (%rdx)
	addl	$1, -12(%rbp)
.L5:
	movl	-12(%rbp), %eax
	cmpl	-24(%rbp), %eax
	jle	.L6
	movq	-8(%rbp), %rax
.L3:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE6:
	.size	array_range, .-array_range
	.ident	"GCC: (Ubuntu 11.3.0-1ubuntu1~22.04) 11.3.0"
	.section	.note.GNU-stack,"",@progbits
	.section	.note.gnu.property,"a"
	.align 8
	.long	1f - 0f
	.long	4f - 1f
	.long	5
0:
	.string	"GNU"
1:
	.align 8
	.long	0xc0000002
	.long	3f - 2f
2:
	.long	0x3
3:
	.align 8
4:
