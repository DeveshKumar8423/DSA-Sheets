/*
Immutable objects are objects whose elements cannot be modified once declared.

A String in Java that is specified as immutable, as the content shared storage in a single
pool to minimize creating a copy of the same value. String class and all wrapper classes
in Java that include Boolean, Character, Byte, Short, Integer, Long, Float, and Double are immutable.
A user is free to create immutable classes of their own.

In Java refers to a string object that cannot be altered, but the reference to
the object can be changed. 
*/

String str = "knowledge";

// assigns a new reference to the 
// same string "knowledge"
String s = str;   

str = str.concat(" base");

//Output
Knowledge Base

/*
This appends a string ” base” to str. But wait, how is this possible,
since String objects are immutable? Well to your surprise, it is.

When the above statement is executed, the VM takes the value of String str, i.e. “knowledge”
and appends ” base”, giving us the value “knowledge base”. Now, since Strings are immutable,
the VM can’t assign this value to str, so it creates a new String object, gives it a value “knowledge base”,
and gives it reference str.

At this point in the example above, we have two String objects: the first one we created with the value “knowledge”,
pointed to by s, and the second one “knowledge base”, pointed to by str. But, technically, we have three String objects,
the third one being the literal “base” in the concat statement.
*/
