# @(#) uutot.awk - display uucp statistics - requires new awk
# @(#) Usage:awk -f [site ...] /usr/spool/uucp/.Admim/xferstats
# dosome[]   # site names to work for - all if not set
# remote[]   # array of site names
# bytes[]    # bytes xmitted by site
# time[]     # time spent by site
# files[]    # files xmitted by site
 BEGIN {
	 doall = 1
	 if(ARGC > 2) { 
		 doall = 0;
		 for(i = 1; i < ARGC; i++)
			 dosome[ ARGV[i] ];
		 	ARGV[i] = "";
		}
	}
	kbyte = 1024  # 1000 if you are not picky or super accurative
	bang = "!";
	sending = "->";
        xmitting = "->" "|" "<-";

	hdr1 = "Remote K-Bytes K-Bytes K-Bytes" \
	     "Hr:Mn:Sc Hr:Mn:Sc AvCPS AvCPS   #   #\n";
	hdr2 = "SiteName   Recv   Xmit   Total   "
		"Recv   Xmit   Recv   Xmit Recv Xmit\n";
	hdr3 = "-------- -------- -------- -------- --------" \
     		  "-------- ----- ----- ---- ----";
	fmt1 = "%-8.8s %9.3f %9.3f %9.3f %2d:%02d:%02.2f " \
     	         "%2d:%02d:%02.0f %5.0f %5.0f %4d %4d\n";
}	
