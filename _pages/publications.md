---
layout: page
permalink: /publications/
title: publications
description: 
years: [2019, 2018]
nav: true
---

<div class="publications">

My Profile at <a target="_blank" href="https://scholar.google.com/citations?user=zVRiqxgAAAAJ&hl=en"><i class="ai ai-google-scholar" style="font-size:1.4em;color:#3880dd"></i></a> and <a target="_blank" href="https://dblp.uni-trier.de/pers/hd/l/Liu:Yugeng"><i class="ai ai-dblp" style="font-size:1.4em;color:#e7d30d"></i></a>

{% for y in page.years %}
  <h2 class="year">{{y}}</h2>
  {% bibliography -f papers -q @*[year={{y}}]* %}
{% endfor %}

</div>
