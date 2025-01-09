#! /bin/bash
awk 'BEGIN{ FS="\n"; RS="" }
NF >= 3{
	for(i = 3; i <= NF; ++i){
		sv = split($i, order, " ")
		if(sv == 3){
			title = order[1]
			copies = order[2]
			price = order[3]
			amount = copies * price
			total_vol += copies
			total_amt += amount
			vol[title] += copies
			amt[title] += amount
			}
			else  printf "Incomplete record" 
		}
	}
		END {
			printf "%5s\t%10s\t%6s\n", "TITLE", "COPIES SOLD", "AMOUNT"			
			for(title in vol)
			printf "%3s\t%10d\t%5.2lf$\n", title, vol[title], amt[title]
			printf "%s\n", "________________________________"
			printf "%s\t%s\n", "TOTAL QUANTITY", "TOTAL AMOUNT"
			printf "%14d\t%12.2lf$\n", total_vol, total_amt	
			}' $*
