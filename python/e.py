a=input().lower()
vol="aeiouy"
for i in a:
	if i in vol:continue
	else:
		print("."+str(i),end="")