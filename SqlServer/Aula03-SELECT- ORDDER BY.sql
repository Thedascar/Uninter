SELECT
    BusinessEntityID,
    PersonType,
    Title,
    FirstName,
    MiddleName,
    LastName,
    ModifiedDate

FROM Person.Person
WHERE MiddleName = 'N'
--ORDER BY --4,5,6 -- evitar isso <---
ORDER BY BusinessEntityID
--offset ignora as 50 linhas
OFFSET 50 ROWS
--executa as proximas 10 linhas
FETCH NEXT 10 ROWS ONLY
