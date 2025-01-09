awk '/^#/{
amount = $2 * $3
printf "%s %.2lf\n", $0, amount
next
}
{print}' $*
