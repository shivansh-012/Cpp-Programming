s1=float(input("Enter length of side 1 of a triangle"))
s2=float(input("Enter length of side 2 of a triangle"))
s3=float(input("Enter length of side 3 of a triangle"))

if s1==s2==s3:
    print("The given sides are equal,It is an equilateral triangle.") 
elif s1==s2 or s2==s3 or s3==s1:
    print("the  Given sides form an isosceles triangle") 
elif s1!=s2 and s2!=s3 and s3!=s1:
    print("The Given Sides Form A scalene Triangle")
else:
    print("The Given Sides do not form a triangle")