class NegativeNumberError(Exception):
    pass
def check_positive(number):
    try:
        if number < 0:
            raise NegativeNumberError("Negative number not allowed")
    except NegativeNumberError as e:
        print(f"Custom Error: {e}")
    else:
        print(f"The number is {number}")
    finally:
        print("Execution complete.")
check_positive(10) 
check_positive(-5) 