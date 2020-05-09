# Introduction
We are setting up a new repository to practice our `github` skills.


# Code
Will publish soon!

# Contributors
{% for students in site.stu %}
---
{{ students.user | markdownify }}
{{ students.image | markdownify }}
{{ students.name | markdownify }}
{{ students.content | markdownify }}
---
{% endfor %}


 
