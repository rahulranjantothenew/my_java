from datetime import date
class person:
    def init (self,name,age):
    self.name=name
    self.age=age
    @classmethod
    def fromBirthYear(cls,name,tear):
        return cls(name,date.today().year)
    @staticmethod
    defisAdult(age):
    return age>=18
person1=person("anuj",21)
person2=person.fromBirthYear("anuj",200)
print(person1.age)
print(person2.age)