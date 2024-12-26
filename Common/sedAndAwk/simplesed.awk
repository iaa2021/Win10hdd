# simplesed.awk --- do s/old/new/g using just print
# simplesed.awk --- do s/old/new/g using just print
# NOTE! RS and ORS must be set on the command line
# example on page 266/290
{ if(RT == "")
       printf "%s", $0
       else
       print
	}
