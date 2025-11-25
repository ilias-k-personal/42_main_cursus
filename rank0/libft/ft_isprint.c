#include <stdio.h>

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 127)
		return (1);
	return (0);
}
/*
int main(int argc, char *argv[])
{
	(void) argc;
	
	printf("%c\n%d\n%d\n", *argv[1], *argv[1], ft_isprint(*argv[1]));
	return 0;

    // for testing purposes:
    // Α α, Β β, Γ γ, Δ δ, Ε ε, Ζ ζ, Η η, Θ θ, Ι ι, Κ κ, Λ λ, Μ μ, Ν ν, Ξ ξ, Ο ο, Π π, Ρ ρ, Σ σ ς, Τ τ, Υ υ, Φ φ, Χ χ, Ψ ψ, Ω ω
}
*/