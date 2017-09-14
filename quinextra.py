S = '''S = {}

def make_literal(s):
    out = []
    for c in s:
        if c == "\'":
            out.append("\\\\\'")
        elif c == "\\\\":
            out.append("\\\\\\\\")
        else:
            out.append(c)
    return "".join(out)

def quinextra(f):
    print f(S.format("\'\'\'" + make_literal(S) + "\'\'\'\\n"))

quinextra(eval(raw_input()))
'''


def make_literal(s):
    out = []
    for c in s:
        if c == "'":
            out.append("\\'")
        elif c == "\\":
            out.append("\\\\")
        else:
            out.append(c)
    return "".join(out)

def quinextra(f):
    print f(S.format("'''" + make_literal(S) + "'''\n"))

quinextra(eval(raw_input()))

