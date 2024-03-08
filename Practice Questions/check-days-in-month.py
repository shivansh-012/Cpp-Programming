def chkLeapYr(year):
    if(year%4==0 and  year%100!=0) or (year%400==0):
        return True
m = int(input("enter a month."))
if m==2:
    y = int(input("enter a year."))
    print("29 days") if chkLeapYr(y) else print("28 days")
elif m in {4,6,9,11}:
    print("30 days")
else:
    print("31 days")