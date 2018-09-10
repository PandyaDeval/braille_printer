![Logo](https://raw.githubusercontent.com/PandyaDeval/braille_printer/image.jpg)

#
# BRAILLE PRINTER



**INNOVATION WORK AND INNOVATION SUMMARY**

Let&#39;s voluntarily discard one of our most valuable senses, our eyes by blind folding it and try to do so called EASY things like walking AROUND your room or try to put toothpaste ON the toothbrush head or run BEHIND your pet dog or even simpler try to open page 356 of your notebook. All these &quot;MATTER OF SECONDS TASKS&quot; become humongous in a matter of second. Well even a little contribution for the people living in this &quot;DARK WORLD&quot; helps them a tonne and seriously it will be utter shame for our world of &quot;ENGINEERING&quot; if these people have to count all way down to PAGE 356 one by one just to go to a particular page of a book. Inspired with the similar motto we team Drishti (SVNIT Surat) started to work on a motive to provide them the privilege to read and the texts of the book using the braille language but since the conversion of a normal text to a braille language required the knowledge and accuracy for the same, hence we design a machine which converts the writings of a book simply by recognizing it using a camera and print in a braille language at the desired paper.

The goal of this project is to produce a low cost braille embosser. The production price of a complete braille embosser must be much less than what is currently on the market to meet the needs of the blind community. The printer must adhere to standard braille font size with accuracy and repeatability.

We can divide the project in 2 parts as mechanical and electronics side. From mechanical side, a new design for a mechanical assembly and its interface with electronic controls in order to emboss braille is mentioned in this abstract. Cost and size reduction will be the major priority. The entire mechanical assembly is an upgrade of 2 Dimensional Plotter prototype already built with minor modifications. The individual dots embossed on the paper are made by applying force to pins in a 2x3 pin pack. This design considers each braille character as two independent columns of three dots as opposed to an entire 2x3 matrix of six dots thus drastically reducing the number of possible combinations of dots. Every permutation for a column of dots, a half braille character, is extruded on the wheel. Two wheels are independently rotated by stepper motor to form a braille character which then presses braille pins into the paper. Rack and pinion mechanism is used for up-down motion of the wheels.

Force required for embossing is around 5 N which may take no longer than 15 minutes to print a page. Braille paper is continuously fed into the printer while the embossing mechanism moves perpendicular to the feed of the paper. Now comes the work where we give the brains and the senses to our system to synchronize the work of all the systems. The system will feed itself with the image of the page which consists of the words, letters and paragraphs. The process of Optical Character Recognition which uses either NEURAL NETWORKS or SVM will convert the image from image to text field and the preinstalled memory consists of the characters corresponding to each character of the text field and the corresponding pins of the mechanism will be actuated by the system. We have estimated cost of the project to be nearly 40,000 Rs.

**a. Introduction**

Inspired with the similar motto we team Drishti (SVNIT Surat) started to work on a motive to provide blind people. the privilege to read and the texts of the book using the braille language but since the conversion of a normal text to a braille language required the knowledge and accuracy for the same, hence we design a machine which converts the writings of a book simply by recognizing it using a camera and print in a braille language at the desired paper.

**b. motivation**

Despite having one of the largest population of visually impaired people, the literacy rate among blind people is very low in our country. A majority of this population resides in rural areas where awareness regarding braille is low. Also, there is a huge shortage of Braille teachers. But one of the main reasons for low literacy rate among blind people is due to lack of efficient teaching aids like books. Even though technology is advancing at a very high speed, there has been no or very little change in the manufacturing of commercial Braille Printers, which is very expensive and hence not affordable by individuals and small-scale teaching institutions. While many audio formats of books and other assistive technology available in the markets, braille printed books are still essential for every blind person and they should learn it. Since Braille has been internationally accepted as the official communications system for the blind so a blind person that can read and write Braille is considered literate. On the other hand, one who cannot use Braille is considered illiterate, even though that person can use assistive technology to read and write. Moving on, a blind person who learns manual reading and writing has a better foundation of knowledge when starting to use more advanced technology. Such skills and knowledge are very important in finding a suitable job. Thus, with proper foundation of braille one can easily find a job and add to economy of the country. So we think to design and produce a low cost and user-friendly Braille Printer of a reasonable size. This will help the blind community enjoy the basic right of education. Also, we plan to make a software which will create a Braille document from any digital file and print it. This will help in publishing books for the blind.

We are also including a feature which enables the user to type in English and the machine will print it in Braille script.

**c. Component of Innovation / Concept behind the work**

Commercial braille printers cost nearly 1.3 Lakh while the estimated worth of our Braille printer is nearly 20,000 Rs. In braille embossers currently available in market, solenoid is used for embossing paper which is quite costly. The solenoid when used also should be accompanied by cooling mechanism to prevent excessive heating and hence fans are provided in commercial braille printers. Also, the solenoid consumes large amount

of current but has low efficiency. While we have used mechanical assembly in our printer and its interface with electronic controls in order to emboss braille. The commercially available braille printer uses combinations of 6 dots at a time to print a single alphabet while we have designed to print a complete alphabet at a time with combination of pair of 3 pins separately. Reducing the number of combinations of braille dots we can effectively and easily print an alphabet. The mechanism uses two octagonal figures, the sides of which will have all combinations in both octagons and proper rotation of stepper motor can get any letter of braille script.

**d. Details of the work / description of innovation / how it works**

We can divide the project in 2 parts as mechanical and electronics side. From mechanical side, a new design for a mechanical assembly and its interface with electronic controls in order to emboss braille is mentioned in this abstract. Cost and size reduction will be the major priority. The entire mechanical assembly is an upgrade of 2 Dimensional Plotter prototype already built with minor modifications. The individual dots embossed on the paper are made by applying force to pins in a 2x3 pin pack. This design considers each braille character as two independent columns of three dots as opposed to an entire 2x3 matrix of six dots thus drastically reducing the number of possible combinations of dots. Every permutation for a column of dots, a half braille character, is extruded on the wheel. Two wheels are independently rotated by stepper motor to form a braille character which then presses braille pins into the paper. The Pneumatic actuator is used to actuate our punching assembly. The mini-compressor &quot;300 PSI&quot; is used to create 3.5 Bar air pressure in a bottle (Tested upto 7 Bar). Pneumatic actuator is either controlled from arduino using a solenoid valve or using the manual button.

Force required for embossing is around 5 N which may take no longer than 15 minutes to print a page. Braille paper is continuously fed into the printer while the embossing mechanism moves perpendicular to the feed of the paper. Now comes the work where we give the brains and the senses to our system to synchronize the work of all the systems. The system will feed itself with the image of the page which consists of the words, letters and paragraphs. The process of Optical Character Recognition which uses either NEURAL NETWORKS or SVM or Google Pytesseract will convert the image from image to text field and the preinstalled memory consists of the characters corresponding to each character of the text field and the corresponding pins of the mechanism will be actuated by the system. We have estimated cost of the project to be nearly 20,000 Rs.

**e. applications**

The following results are expected by our project:

1. To efficiently print a Braille text entered through a standard keyboard.

2. To facilitate typing and printing by directly entering the Braille characters.

3. To print a digital file by converting it into a Braille document.

4. Reasonable cost of Braille Printer.

5. To create impact on most of the proportion of blind community in the world.



**f. Impact of project**

INDIA accounts for 20% of global blind population. Despite technological advancements in audio interfacing and other technologies, the blind community in INDIA still relies largely on braille for communication and documentation. Printing e-mails, forms and reports for personal use as well as distribution of material is critical for the blind community. Current products on the market retail for at least 1,30,000 Rs., a financial burden that institutions and blind individuals often cannot bear.

Our project is quite cheap compared to present day braille embosser available in the market. Hence, it will enable the blind community to print forms, emails in comparatively much lower price but with the same accuracy. It will also help to increase the literacy rate among blind people. So it will contribute to uplift the blind community.

**g. Challenges**

a. To minimize its weight and cost .

b. Achieve Proper alignment of everything is big challenge . every time 2 or 3 mm error are there.

**h. future scope**

Our Braille Printer is drastically cheaper than the ones commercially available.This will enable the use of these printers for educational and recreational purposes and thus will help in upliftment of the blind community. Also, by integrating many features the project provides the benefit of many features combined into a single product. Some of which include:

- Braille typing.
- English to Braille typing.
- Converting a digital document and printing it in Braille script.