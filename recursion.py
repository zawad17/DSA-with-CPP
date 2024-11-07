def factorial(n):
    if n == 0:
        return 1
    else:
        return n * factorial(n - 1)


def fibonacci(n):
    if n == 0:
        return 0
    elif n == 1:
        return 1
    else:
        return fibonacci(n - 1) + fibonacci(n - 2)



def sum_array(arr):
    if len(arr) == 0:
        return 0
    else:
        return arr[0] + sum_array(arr[1:])



def reverse_string(s):
    if len(s) <= 1:
        return s
    else:
        return reverse_string(s[1:]) + s[0]








if __name__ == "__main__":
    number = 6
    print(f"The {number}th Fibonacci number is: {fibonacci(number)}")

    print(f"The factorial of {number} is: {factorial(number)}")
    arr = [1, 2, 3, 4, 5]
    print(f"Sum of the array is: {sum_array(arr)}")
    
    string = "hello"
    print(f"Reversed string is: {reverse_string(string)}")


