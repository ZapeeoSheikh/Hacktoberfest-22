def isPrime(n):

    if n > 1:
        for i in range(2, n):
            if n % i == 0:
                # return False
                print(f"number {num} is not a prime")
                break
        else:
            print(f"number {n} is a prime")
            
num = int(9)
isPrime(num)


