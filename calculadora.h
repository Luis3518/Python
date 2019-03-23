while 1==1:
	
	print("Ingrese 'suma' para sumar dos numeros")
	print("Ingrese 'resta' para restar dos numeros")
	print("Ingrese 'por' para multiplicar dos numeros")
	print("Ingrese 'dividir' para dividir dos numeros")
	print("Ingrese 'quit' para salir del sistema")
	user_input = input(": ")
	if user_input == "quit":
		break
	elif user_input == "suma":
		num1=float(input("Ingrese el primer numero\n"))
		num2=float(input("Ingrese el segundo numero\n"))
		suma=num1+num2
		print(str(suma))
	elif user_input == "resta":
		num1=float(input("Ingrese el primer numero\n"))
		num2=float(input("Ingrese el segundo numero\n"))
		resta=num1-num2
		print(str(resta))
	elif user_input == "por":
		num1=float(input("Ingrese el primer numero\n"))
		num2=float(input("Ingrese el segundo numero\n"))
		mult=num1*num2
		print(str(mult))
	elif user_input == "dividir":
		num1=float(input("Ingrese el primer numero\n"))
		num2=float(input("Ingrese el segundo numero\n"))
		div=num1/num2
		print(str(div))
	else:
		print("ingresaste cualkiera, escribí bien")
		
