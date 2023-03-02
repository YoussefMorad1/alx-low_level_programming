	.file	"7-leet.c"
	.text
	.globl	leet
	.type	leet, @function
leet:
.LFB0:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$240, %rsp
	movq	%rdi, -232(%rbp)
	movq	%fs:40, %rax
	movq	%rax, -8(%rbp)
	xorl	%eax, %eax
	movb	$65, -213(%rbp)
	movl	$0, -212(%rbp)
	jmp	.L2
.L3:
	movsbl	-213(%rbp), %eax
	cltq
	movzbl	-213(%rbp), %edx
	movb	%dl, -208(%rbp,%rax)
	movzbl	-213(%rbp), %eax
	addl	$1, %eax
	movb	%al, -213(%rbp)
.L2:
	cmpb	$90, -213(%rbp)
	jle	.L3
	movb	$97, -213(%rbp)
	jmp	.L4
.L5:
	movsbl	-213(%rbp), %eax
	cltq
	movzbl	-213(%rbp), %edx
	movb	%dl, -208(%rbp,%rax)
	movzbl	-213(%rbp), %eax
	addl	$1, %eax
	movb	%al, -213(%rbp)
.L4:
	cmpb	$122, -213(%rbp)
	jle	.L5
	movb	$52, -143(%rbp)
	movzbl	-143(%rbp), %eax
	movb	%al, -111(%rbp)
	movb	$51, -107(%rbp)
	movzbl	-107(%rbp), %eax
	movb	%al, -139(%rbp)
	movb	$55, -92(%rbp)
	movzbl	-92(%rbp), %eax
	movb	%al, -124(%rbp)
	movb	$48, -97(%rbp)
	movzbl	-97(%rbp), %eax
	movb	%al, -129(%rbp)
	movb	$49, -100(%rbp)
	movzbl	-100(%rbp), %eax
	movb	%al, -132(%rbp)
	jmp	.L6
.L10:
	movl	-212(%rbp), %eax
	movslq	%eax, %rdx
	movq	-232(%rbp), %rax
	addq	%rdx, %rax
	movzbl	(%rax), %eax
	cmpb	$96, %al
	jle	.L7
	movl	-212(%rbp), %eax
	movslq	%eax, %rdx
	movq	-232(%rbp), %rax
	addq	%rdx, %rax
	movzbl	(%rax), %eax
	cmpb	$122, %al
	jle	.L8
.L7:
	movl	-212(%rbp), %eax
	movslq	%eax, %rdx
	movq	-232(%rbp), %rax
	addq	%rdx, %rax
	movzbl	(%rax), %eax
	cmpb	$64, %al
	jle	.L9
	movl	-212(%rbp), %eax
	movslq	%eax, %rdx
	movq	-232(%rbp), %rax
	addq	%rdx, %rax
	movzbl	(%rax), %eax
	cmpb	$90, %al
	jg	.L9
.L8:
	movl	-212(%rbp), %eax
	movslq	%eax, %rdx
	movq	-232(%rbp), %rax
	addq	%rdx, %rax
	movzbl	(%rax), %eax
	movsbl	%al, %eax
	movl	-212(%rbp), %edx
	movslq	%edx, %rcx
	movq	-232(%rbp), %rdx
	addq	%rcx, %rdx
	cltq
	movzbl	-208(%rbp,%rax), %eax
	movb	%al, (%rdx)
.L9:
	addl	$1, -212(%rbp)
.L6:
	movl	-212(%rbp), %eax
	movslq	%eax, %rdx
	movq	-232(%rbp), %rax
	addq	%rdx, %rax
	movzbl	(%rax), %eax
	testb	%al, %al
	jne	.L10
	movq	-232(%rbp), %rax
	movq	-8(%rbp), %rdx
	subq	%fs:40, %rdx
	je	.L12
	call	__stack_chk_fail@PLT
.L12:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE0:
	.size	leet, .-leet
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
