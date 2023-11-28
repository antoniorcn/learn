def solution (seconds):

    plural = lambda qtd: "s" if qtd > 1 else ""

    # Write your code here
    MINUTE = 60
    HOUR = 60  * MINUTE
    DAY = 24 * HOUR
    YEAR = 365 * DAY

    tempo = seconds
    
    expressions = {}
    texto = ""

    if tempo < 0:
        return None
    if tempo == 0:
        return "now"
    
    if tempo > YEAR:
        expressions["YEARS"] = tempo // YEAR
        tempo -= expressions["YEARS"]
    
    if tempo > DAY:
        expressions["DAYS"] = tempo // DAY
        tempo -= expressions["DAYS"]

    if tempo > HOUR:
        expressions["HOURS"] = tempo // HOUR
        tempo -= expressions["HOURS"]

    if tempo > MINUTE:
        expressions["MINUTES"] = tempo // MINUTE
        tempo -= expressions["MINUTES"] 

    if tempo > 0:
        expressions["SECONDS"] = tempo
        tempo -= expressions["SECONDS"] 
    print(expressions)

    # concatenar
    if "YEARS" in expressions:
        qtd = expressions["YEARS"]
        value = "{} year{}".format(qtd, plural(qtd))
        texto += value
    if "DAYS" in expressions:
        qtd = expressions["DAYS"]
        value = "{} day{}".format(qtd, plural(qtd))
        texto += value
    if "HOURS" in expressions:
        qtd = expressions["HOURS"]
        value = "{} hour{}".format(qtd, plural(qtd))
        texto += value
    if "MINUTES" in expressions:
        qtd = expressions["MINUTES"]
        value = "{} minute{}".format(qtd, plural(qtd))
        texto += value
    if "SECONDS" in expressions:
        qtd = expressions["SECONDS"]
        value = "{} second{}".format(qtd, plural(qtd))
        texto += value

    return texto



seconds = int(input())

out_ = solution(seconds)
print (out_)