#!/usr/bin/python3
from calculator_1 import add, sub, mul, div


def main():
    a = 10
    b = 5
    summation = add(a, b)
    sub = sub(a, b)
    mul = mul(a, b)
    div = div(a, b)
    print("{:d} + {:d} = {:d}".format(a, b, summation))
    print("{:d} - {:d} = {:d}".format(a, b, sub))
    print("{:d} * {:d} = {:d}".format(a, b, mul))
    print("{:d} / {:d} = {:d}".format(a, b, div))

if __name__ == '__main__':
    main()
