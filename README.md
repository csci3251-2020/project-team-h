# Introduction
We are setting up a new repository to practice our `github` skills.


# Code
Will publish soon!

# Contributors
{% for students in site.stu %}
---
user: {{ students.user | markdownify }}
image: {{ students.image | markdownify }}
name: {{ students.name | markdownify }}
{{ students.content | markdownify }}
---
{% endfor %}


 
