---
layout: page
permalink: /publications/
title: Publications
description: 
years: [2021]
bachelor: [2019, 2018]
nav: true
---

<div class="publications">

My profile at <a target="_blank" href="https://scholar.google.com/citations?user=zVRiqxgAAAAJ&hl=en"><i class="ai ai-google-scholar" style="font-size:1.4em;color:#3880dd"></i></a> and <a target="_blank" href="https://dblp.uni-trier.de/pers/hd/l/Liu:Yugeng"><i class="ai ai-dblp" style="font-size:1.4em;color:#e7d30d"></i></a>. I also provide part of the website links of the professors who are the co-authors with me in computer security field.

{% for y in page.years %}
  <h2 class="year">{{y}}</h2>
  {% bibliography -f papers -q @*[year={{y}}]* %}
{% endfor %}

{% for y in page.bachelor %}
  <h2 class="year">{{y}}</h2>
  {% bibliography -f papers -q @*[year={{y}}]* %}
{% endfor %}

</div>
