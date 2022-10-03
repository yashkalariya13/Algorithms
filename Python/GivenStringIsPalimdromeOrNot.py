#Python Program to check given string is palimdrome or not

Str_input = input("Enter Orginal String: ")


ans = "Yes, It is Palimdrome" if Str_input == Str_input[::-1] else "No, It is not Palimdrome"
print(ans)
