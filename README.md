# star-time
This project is a clock that is build in a box which inside is covered with black paper and broken cd acting like stars . The Leds on the top of the box give it also the role of an lamp.

# What it is
well it's a clock with the whole exception that it is inside a diy case made from a toy box ,which has cd's and a old console as decorations. Leds are mountaid on the top of the box so it can serve as a lamp

# photos

<img width="4080" height="3072" alt="IMG_20260715_014521" src="https://github.com/user-attachments/assets/fb42716d-80ca-4214-9034-43dd52a81fac" />
<img width="3072" height="4080" alt="IMG_20260713_133522" src="https://github.com/user-attachments/assets/ff0e5ebe-b4aa-47ef-b3d4-b0c71ff55962" />
<img width="3072" height="4080" alt="97da2707-07a3-4620-8276-44eae094bafc" src="https://github.com/user-attachments/assets/12505421-1b9c-4adf-a8bb-0fc323a14a28" />

# What you need
### Must have:

1. A liquid Crystal Screen 16x2
2. an microcontroller(i used arduino Uno)
3. An LED strip
   
### I recommend also having:

1. A broken cd
2. A broken console
3. a potenziometer

## Cost :
$2.67 for [LED strip](https://www.aliexpress.com/item/1005007987819361.html?spm=a2g0o.productlist.main.17.4b7a12b2VWVrH8&algo_pvid=d2d07c63-dca5-4d2e-a88d-1d483a061ac4&algo_exp_id=d2d07c63-dca5-4d2e-a88d-1d483a061ac4-16&pdp_ext_f=%7B%22order%22%3A%2231998%22%2C%22eval%22%3A%221%22%2C%22orig_sl_item_id%22%3A%221005007987819361%22%2C%22orig_item_id%22%3A%221005007532172895%22%2C%22fromPage%22%3A%22search%22%7D&pdp_npi=6%40dis%21EUR%212.37%212.37%21%21%2117.98%2117.98%21%402161390617841906163873451e0e78%2112000043169112947%21sea%21GR%210%21ABX%211%210%21n_tag%3A-29910%3Bd%3Ac4c76e7%3Bm03_new_user%3A-29895&curPageLogUid=ZsaYuZPqq7K5&utparam-url=scene%3Asearch%7Cquery_from%3A%7Cx_object_id%3A1005007987819361%7C_p_origin_prod%3A1005007532172895)

$2.74 for [liquid crystal Screen 16x2](https://www.aliexpress.com/item/1005006964073869.html?spm=a2g0o.productlist.main.1.206aBzgNBzgNTV&algo_pvid=0ba9223a-7b94-456c-8a24-6ea03e7f8029&algo_exp_id=0ba9223a-7b94-456c-8a24-6ea03e7f8029-0&pdp_ext_f=%7B%22order%22%3A%225846%22%2C%22eval%22%3A%221%22%2C%22fromPage%22%3A%22search%22%7D&pdp_npi=6%40dis%21USD%211.84%211.84%21%21%211.84%211.84%21%402103842a17841907582518885e0f0b%2112000038877067798%21sea%21GR%216982496912%21ABX%211%210%21n_tag%3A-29910%3Bd%3Ac4c76e7%3Bm03_new_user%3A-29895&curPageLogUid=8bLqcyjIzBAn&utparam-url=scene%3Asearch%7Cquery_from%3A%7Cx_object_id%3A1005006964073869%7C_p_origin_prod%3A)

$6.98 for [arduino Uno](https://www.amazon.com/Development-ATmega328P-CH340G-Straight-Header/dp/B0CP78J3L7/ref=sr_1_3?crid=30SHWDEXOYFXP&dib=eyJ2IjoiMSJ9.LwMPeIlxPNWBY0mif4GAP2tO2bGeI9KetHJvn9vm6j10qMuDC4FxLumZGwciVUazlYfTTtd5hYxCRvwryBReR7KlJHeP69YvvlrbKTsa9UOJUaDGOaZAzjCFz55HxS1zXuPD8BSQt0bV5AKv9D8blo3KcKIyPRQh_6JyHhn6T3pQP7JuGvebN57ryh4N-p1SMEAKMoQXSHE5Sc148LUYADDFqZ6W8KHDmzEU_SQhPMs.GBT3n_I-md1NNYOZlZvLmQjN0J_tnlc9L_Pf_IpMBqc&dib_tag=se&keywords=arduino+uno+r3&qid=1784191014&sprefix=arduino+unor3%2Caps%2C653&sr=8-3)

### total: 12.39$


   

# Schematic

<img width="241" height="220" alt="liquid_screen_poteziometer" src="https://github.com/user-attachments/assets/55431d69-f94f-43e1-b0c5-5bc4835b5797" />

# Code

Click [here](https://github.com/Nikolaossamaras/star-time/blob/main/star_time_code.ino)
### Warning 
the clock does not get it's information from the internet it just counts the seconds so be careful when you set up the clock in the code to , so it matches your local time

# Credits
-[Arduino IDE](https://support.arduino.cc/hc/en-us/articles/360019833020-Download-and-install-Arduino-IDE) - wrote the code on it 

-[Arduino The Official Starter Kit Deluxe Bundle](https://www.amazon.com/Official-Arduino-Starter-Deluxe-Bundle/dp/B00UET6VJ6/ref=sr_1_1_sspa?adgrpid=1330411652890864&dib=eyJ2IjoiMSJ9.SNzi4-xRTO4a4acborNeNHJE-jbIm4DZkt04TFJlVtBsS_gkUgQtKu6gZoUMyCXz2Yti214HT6FCgbiD1hWJTLMgZdvJPmFI4lqd6tHMJaI7w38b61OOS84Uyr6r0rFF2zGUfl1jV07Rf3KGWjlfX1F_Hz9TqpEKvMx4FJUxOQy_-nWP1ZX_mouG5CBCTUJcuR1Fs4lXpt26sNpSWlzMgj8_vlt1tPjHXFlw7Ph94wI.fPXBwpuVGDEizqLCuKRTteKLBhPkre3dQYDIcBFu_fY&dib_tag=se&gb=2&hvadid=83151017281343&hvbmt=bb&hvdev=c&hvexpln=0&hvlocphy=136787&hvnetw=o&hvocijid=8955723005884701272--&hvqmt=b&hvtargid=kwd-83151964643444%3Aloc-76&hydadcr=24357_13514954&keywords=kit+arduino+beginner&mcid=ab66feb97c1e334d8a19b9d9fb59aadf&qid=1784071151&sr=8-1-spons&sp_csd=d2lkZ2V0TmFtZT1zcF9hdGY&psc=1) - used the book from the kit to connect the Piezo

