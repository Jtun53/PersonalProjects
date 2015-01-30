var respContent='false';

function removeIntro(){
	var dom = document.getElementById('contentArea');
	dom.parentNode.removeChild(dom);
	
	if (respContent=='true'){
		respContent='false';
		var dom1 = document.getElementById('infoArea')
		dom1.parentNode.removeChild(dom1);
	}
	
}

function changeClientInfo(obj){
	
	var dom= document.getElementById('years');
	var dom1= document.getElementById(obj);
	var dom2= document.getElementById('responsibilities');
	dom1.style.cursor='pointer';
	if (obj =='0'){
		dom.innerHTML='15';
		dom1.style.color='red';
		dom2.innerHTML =
		 	"<li>Collect trash and recycling</li>"
		 	+"<li>Feather dust all workspaces";
		
	}
	if (obj=='1'){
		document.getElementById('years').innerHTML ="11";
		dom1.style.color='red';
		dom2.innerHTML =
		 	"<li>Empty out garbage and recycle bins</li>"
		 	+"<li>Clean counters and glass surfaces</li>"
		 	+"<li>Vacuum/Mopping</li>";
	}

	if (obj=='2'){
	document.getElementById('years').innerHTML ="4";
	dom1.style.color='red';
	dom2.innerHTML =
		 	"<li>Kitchen cleaning services</li>"
		 	+"<li>Deep carpet cleaning</li>";
	}

	if (obj=='3'){
	document.getElementById('years').innerHTML ="6";
	dom1.style.color='red';
	dom2.innerHTML =
		 "<li>Restroom restocking</li>"
		 +"<li>Deep clean shower stalls</li>"
		 +"<li>Garbage disposal</li>";
	}

	if (obj=='4'){
	document.getElementById('years').innerHTML ="15";
	dom1.style.color='red';
	dom2.innerHTML =
		 "<li>Floor buffering/waxing</li>"
		 +"<li>Dusting/Mopping</li>";
	}

	if (obj=='5'){
	document.getElementById('years').innerHTML ="13";
	dom1.style.color='red';
	dom2.innerHTML =
		"<li>Restroom maintenance</li>"
		+"<li>Garbage disposal</li>";
	}
}

function changeBack(num){
	document.getElementById(num).style.color='blue';
}

function change(img){

	if (img.src == 'http://www.elfymaintenance.com/AboutUs.png'){
		img.src = 'http://www.elfymaintenance.com/AboutUsFocused.png';
	}
	   
	else if (img.src == 'http://www.elfymaintenance.com/AboutUsFocused.png')
		img.src = 'http://www.elfymaintenance.com/AboutUs.png';
		
	if (img.src == 'http://www.elfymaintenance.com/Services.png')
		img.src = 'http://www.elfymaintenance.com/ServicesFocused.png';
	
	else if (img.src == 'http://www.elfymaintenance.com/ServicesFocused.png')
		img.src = 'http://www.elfymaintenance.com/Services.png';
	   
	if (img.src == 'http://www.elfymaintenance.com/Clients.png')
		img.src = 'http://www.elfymaintenance.com/ClientsFocused.png';
		

	else if (img.src == 'http://www.elfymaintenance.com/ClientsFocused.png')
		img.src = 'http://www.elfymaintenance.com/Clients.png';
		
	if (img.src == 'http://www.elfymaintenance.com/ContactUs.png')
		img.src = 'http://www.elfymaintenance.com/ContactUsFocused.png';
		
	else if (img.src == 'http://www.elfymaintenance.com/ContactUsFocused.png')
		img.src = 'http://www.elfymaintenance.com/ContactUs.png';		
}

function changeContent(img){
	if (img.src == 'http://www.elfymaintenance.com/AboutUsFocused.png'){
		removeIntro();
		var about = document.createElement('div');
		about.id='contentArea';
		about.style.height ='550px';
		about.innerHTML =
			"<h1>About Our Company</h1>"
			+"<p>\tElfy Maintenance has been in business for X years. "
			+"We take pride in ourselves with our commitment to working "
			+"at the standards of our clients. Our number of years working "
			+"with our business partners is proof that our clients' happiness "
			+"is our number one priority. The business owner has been in the "
			+"janitorial business for over X years and knows the key concepts "
			+"in training efficient employees.</p> <hr/>"

			+"<h2>Raffy Tan, Owner/Manager</h2>"
			+"Raffy Tan has been a janitor at St. Lukes Hospital since X. "
			+"Now business owner of Elfy Mainenance, he is able to apply his "
			+"years of janitorial services to his employees. Clients get a "
			+"very experienced business partner. The owner of Elfy Maintenance "
			+"is a hands on worker, making sure his employees are doing their "
			+"very best, while also visiting client buildings very frequently and "
			+"servicing buildings himself.<hr/>"

			+"<h2>Our Workers</h2>"
			+"Our employees are comprised of hard working individuals. Many of "
			+"which have been employees with Elfy Maintenance for many years. "
			+"Here at Elfy Maintenance, we realize that there may be extremely "
			+"valuable items in each and every office or building. For that reason, "
			+"we take the time to carefully pick employees so that you are able to "
			+"trust them as much as we do.";
		document.body.appendChild(about);

	}
	
      if (img.src == 'http://www.elfymaintenance.com/ContactUsFocused.png'){
      	removeIntro();
      	var about = document.createElement('div');
	about.id='contentArea';
	about.innerHTML=
		"<h1>Contact Us</h1> <hr>"
	       +"<p>Please feel free to contact us for any questions, comments or concerns. "
	       +"Estimations to provide services to your company are also available.</p>"
	       +"<h3>Email Address:</h3>"
	       +"<p>ElfyMaintenance@yahoo.com</p>"
	       +"<h3>Phone Number:</h3>"
	       +"<b>business phone/fax #:</b><span id='num'> (650)757-8745</span> <br/> <b>cell phone #:</b> <span id='num'>(415)640-2664</span>"
	       +"<br/><br/><p id='footnote'> For questions or comments regarding the website, reporting broken "
	       +"links or images, Please email the Web Admin at Jtungul53@yahoo.com </p>";
	document.body.appendChild(about);
      }
	 if (img.src == 'http://www.elfymaintenance.com/ServicesFocused.png'){
		removeIntro();
      		var about = document.createElement('div');
		about.id='contentArea';
		about.style.height ='780px';
		about.innerHTML=
			"<h1>Services</h1>"
		       +"<h3>Restroom Services</h3>"
		       +"<ul>"
		       +"<li>supply restocking</li>"
		       +"<li>spot clean wall and stalls</li>"
			+"<li>empty trash containers</li>"
			+"<li>urinal and commode cleaning</li>"
			+"<li>clean sink and polish fixtures</li>"
			+"<li>glass cleaning</li>"
			+"<li>mop or sweep flooring</li>"
			+"<li>shower room maintenance</li>"
			+"</ul><hr/>"
			
			+"<h2>Office Services</h2>"
			+"<ul>"
			+"<li>empty out trash and recycling bins</li>"
			+"<li>change trash liner bags if necessary</li>"
			+"<li>feather dust work spaces</li>"
			+"<li>vacuum,sweep or mop floor</li>"
			+"<li>wipe down all cabinets with empty surface</li>"
			+"<li>wipe glass and light fixtures</li>"
			+"<li>hallway and stair cleaning</li>"
			+"</ul><hr/>"

			+"<h2>Kitchen/General Services</h2>"
			+"<ul>"
			+"<li>microwave,toaster and oven cleaning</li>"
			+"<li>wash dishes and coffee pots</li>"
			+"<li>clean sink and wipe counter tops</li>"
			+"<li>refrigerator cleaning</li>"
			+"<li>vacuum,sweep or mop floor</li>"
			+"<li>floor waxing</li>"
			+"<li>deep carpet cleaning</li>"
			+"</ul>"
			
			+"<em>Note: negotiations can be made for any type of requests</em>";

							

		document.body.appendChild(about);
	}
	
	if (img.src == 'http://www.elfymaintenance.com/ClientsFocused.png'){
		removeIntro();
      		var about = document.createElement('div');
		about.id='contentArea';
		about.style.height ='500px';
		about.innerHTML=
			"<h1>Clients</h1>"
			+"<p id='footnote'>*The list of clients and responsibilites presented are only a portion "
			+"of the clients that we have worked with. Please contact us for a more comprehensive list"
			+"<ul id='num'>"
			+"<li onmouseover='changeClientInfo(0)' onmouseout='changeBack(0)' id='0'>Sutter Pacific Medical Foundation</li>"
			+"<li onmouseover='changeClientInfo(1)' onmouseout='changeBack(1)' id='1'>Kimber Management Co.</li>"
			+"<li onmouseover='changeClientInfo(2)' onmouseout='changeBack(2)' id='2'>Ghilotti Bros. Contractors</li>"
			+"<li onmouseover='changeClientInfo(3)' onmouseout='changeBack(3)' id='3'>Schoomaker Point Marina</li>"
			+"<li onmouseover='changeClientInfo(4)' onmouseout='changeBack(4)' id='4'>Rafael Lumber</li>"
			+"<li onmouseover='changeClientInfo(5)' onmouseout='changeBack(5)' id='5'>BAE Systems</li>"
			+"</ul>";
			
		document.body.appendChild(about);
		if(respContent =='false'){
		var newDiv = document.createElement('div');
		
		newDiv.id='infoArea';
		
		newDiv.innerHTML='<b>Years serviced:<b>' + '<p id="years"></p>'
				 +"<b>responsibilities:<b>"
				 +"<ul id='responsibilities'>"
				 +"</ul>";
		}
		
		if(respContent=='false'){
			respContent='true';
			document.body.appendChild(newDiv);
		}
	}
}