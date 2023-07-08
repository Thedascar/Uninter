/* trazer apenas alguma quantidade de linhas
-- order by -> ordena desc, asc
 */

SELECT TOP 1000
    BusinessEntityID    AS [ID PESSOA],
    PersonType          AS [TIPO PESSOA],
    Title               AS [TITULO],
    FirstName           AS [PRIMEIRO NOME],
    MiddleName          AS [NOME DO MEIO],
    LastName            AS [ULTIMO NOME]
FROM Person.Person 
WHERE Title= 'Mr.'
ORDER BY FirstName DESC, LastName DESC


SELECT DISTINCT
    --BusinessEntityID    AS [ID PESSOA],
    --PersonType          AS [TIPO PESSOA],
    --Title               AS [TITULO],
    FirstName           AS [PRIMEIRO NOME],
    MiddleName          AS [NOME DO MEIO],
    LastName            AS [ULTIMO NOME]
FROM Person.Person 
WHERE Title = 'Mr.'
AND MiddleName = 'M.'
ORDER BY FirstName,MiddleName


