# Input is a number, like 5 and the program creates something like that:
# * * * * *
# * * * *
# * * *
# * *
# *

# Optional the direction can be switch trough a boolean variable

stars = 5
forward = True


def triangle(stars: int, forward: bool):
    for width in range(*((0, stars + 1, 1), (stars, 0, -1))[forward]):
        print("*" * width)


triangle(5, False)
