def length():
    a = inputAmount()
    while True:
        print('1. Inches to Feet')
        print('2. Feet to Inches')
        print('3. Feet to Yards')
        print('4. Yards to Feet')
        print('5. Feet to Miles')
        print('6. Miles to Feet')
        print('7. Inches to Centimeters')
        print('8. Centimeters to Inches')
        print('9. Feet to Meters')
        print('10. Meters to Feet')
        print('11. Miles to Kilometers')
        print('12. Kilometers to Miles')
        opt = input("Enter option: ")
        match opt:
            case '1':
                b = a / 12
                break
            case '2':
                b = a * 12
                break
            case '3':
                b = a / 3
                break
            case '4':
                b = a * 3
                break
            case '5':
                b = a / 5280
                break
            case '6':
                b = a * 5280
                break
            case '7':
                b = a * 2.54
                break
            case '8':
                b = a / 2.54
                break
            case '9':
                b = a / 3.281
                break
            case '10':
                b = a * 3.281
                break
            case '11':
                b = a * 1.609
                break
            case '12':
                b = a / 1.609
                break
            case _:
                print('Invalid input')
    return b

def mass():
    a = inputAmount()
    while True:
        print('1. Ounces to Pounds')
        print('2. Pounds to Ounces')
        print('3. Pounds to Tons')
        print('4. Tons to Pounds')
        print('5. Ounces to Grams')
        print('6. Grams to Ounces')
        print('7. Pounds to Kilograms')
        print('8. Kilograms to Pounds')
        print('9. US tons to Metric tons')
        print('10. Metric tons to US tons')
        opt = input('Enter option: ')
        match opt:
            case '1':
                b = a / 16
                break
            case '2':
                b = a * 16
                break
            case '3':
                b = a / 2000
                break
            case '4':
                b = a * 2000
                break
            case '5':
                b = a * 28.35
                break
            case '6':
                b = a / 28.35
                break
            case '7':
                b = a / 2.205
                break
            case '8':
                b = a * 2.205
                break
            case '9':
                b = a / 1.102
                break
            case '10':
                b = a * 1.102
                break
            case _:
                print('Invalid input')
    return b

def temperature():
    a = inputAmount()
    while True:
        print('1. Fahrenheit to Celsius')
        print('2. Fahrenheit to Kelvin')
        print('3. Celsius to Fahrenheit')
        print('4. Celsius to Kelvin')
        print('5. Kelvin to Fahrenheit')
        print('6. Kelvin to Celsius')
        opt = input('Enter option: ')
        match opt:
            case '1':
                b = (a - 32) * (5/9)
                break
            case '2':
                b = (a - 32) * (5/9) + 273.15
                break
            case '3':
                b = a * (9/5) + 32
                break
            case '4':
                b = a + 273.15
                break
            case '5':
                b = (a - 273.15) * (9/5) + 32
                break
            case '6':
                b = a - 273.15
                break
            case _:
                print('Invalid input')
    return b

def inputOption():
    print('1. Length\n2. Mass\n3. Temperature\n0. Quit')
    o = input('Enter option: ')
    return o
def inputAmount():
    a = input('Enter amount: ')
    while not a.isdigit():
        a = input('Enter amount: ')
    return int(a)

option = inputOption()

while option != '0':
    result = ""
    match option:
        case '0':
            print('Thank you.')
        case '1':
            result = length()
        case '2':
            result = mass()
        case '3':
            result = temperature()
        case _:
            print('Invalid input')
    if result != '':
        print(round(result,2))
    option = inputOption()