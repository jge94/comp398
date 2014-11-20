Project2
========

Group project: with [Lithia](https://github.com/lithiah/comp398) and [Bre](https://github.com/bjoachim/comp398)
The link to the code: [here](https://github.com/lithiah/Project2)

DoggieDeets - Documentation:
---------------------------

GET database:
------------
    
http://.../getall
    
This is a GET request that returns the entire database. There are no query parameters. 

    Example: http://localhost:3000/getall 
    Returns: 
    [
    {
        "_id": "546d557c49a3cbcf83d6cdca", 
        "name": "Pan",
        "breed": "labrador",
        "temperament": "abrupt",
        "location": "civilian home",
        "__v": 0 
    },
    {
        "_id": "546d557c49a3cbcf83d6cdcb",
      "name": "Rex",
      "breed": "labrador",
      "temperament": "sleepy",
      "location": "vet",
      "__v": 0
    }, ...

POST new dog:
------------

http://.../dogadd
        
This is a POST request that adds a new dog to the database and returns that dog's information. The following are query parameters: dogname, breed, temperament, location

    Example: http://localhost:3000/dogadd?dogname=Lithia&breed=Great Jinnan&temperament=Breanna-esqe&location=SC 1314

    dogname: Lithia
    breed: Great Jinnan
    temperament: Breanna-esqe
    location: SC 1314

    Returns: 
    {
        "__v": 0,
        "name": "Lithia",
        "breed": "Great Jinnan",
        "temperament": "Breanna-esqe",
        "location": "SC 1314",
        "_id": "546d5fb6f1c3e7668554d924"
    }

-   PUT new dog information:


DELETE dog entry: 
------------

http://localhost:3000/deletedog

This is a DELETE request that takes the id, deletes the data point of this id, and returns it
    
    - Input: an id number, which already exits in the database (can be checked on mongolab)
    - Output: the data point in the name of the id gets deleted, 
              returns the object that get deleted
    - Example: 
              * http://localhost:3000/deletedog?id=546d557c49a3cbcf83d6cdcb
              * URL parameter key: 'id'
              * Value: '546d557c49a3cbcf83d6cdcb'
              
              - Returns: 
              - {
                    "_id": "546d557c49a3cbcf83d6cdcb",
                    "name": "Rex",
                    "breed": "labrador",
                    "temperament": "sleepy",
                    "location": "vet",
                    "__v": 0
              - }

              - in Mongolab: data gets deleted
