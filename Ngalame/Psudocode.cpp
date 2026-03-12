START
INPUT total_price

IF total_price > 10000 THEN
    discount = total_price * 0.10
ELSE
    discount = 0
END IF

final_amount = total_price - discount

PRINT "Final Amount =", final_amount
END
