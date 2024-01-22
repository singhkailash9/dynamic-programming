def fibonacci(n):
    if n <= 0:
        print("Please enter a positive integer")
        return -1
    elif n == 1:
        return 0
    elif n == 2:
        return 1
    else:
        first_number, second_number = 0, 1
        for _ in range(3, n + 1):
            sum_value = first_number + second_number
            first_number, second_number = second_number, sum_value
        return second_number

num = int(input("Enter a number: "))
result = fibonacci(num)

if result != -1:
    print(f"The {num}th Fibonacci number is {result}")