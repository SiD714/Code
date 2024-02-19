num1=float(input("Bsdk Pahla Number Daalo:"))
num2=float(input("Dusra Number Bhi Daalo Bsdk:"))
choice=input("Kya Karna Chahta Re Gandu")
#its usually takes string type data
#so first we haver to convert it in float usig float
#after that it will take numerical value
#Its called data type
if choice=="+":
    sum=num1+num2
    print("sum of numbers is",sum)
elif choice=="-":
    diff=num1-num2
    print("differece of numbers is",diff)

elif choice=="*":
    mul=num1*num2
    print("multiply of numbers is",mul)

elif choice=="/":
    div=num1/num2
    print("quotient of numbers is",div)

else:
    print("Abe Anpadh Kya Likha Hai Sahi Se Likhe Ke Dubara Run Kar")   