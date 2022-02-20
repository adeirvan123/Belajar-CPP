# global variabel
u1 = 0
u2 = 200 
u3 = 500
u4 = 1000

# variabel error negatif
a = -100
b = -50
c = 0
d = 5

# variabel error positif kecil
a1 = 0
b1 = 5
c1 = 10
 
# variabel error positif sedang
a2 = 5
b2 = 15
c2 = 29

# variabel error positif besar
a3 = 22
b3 = 30
c3 = 50
d3 = 55


def hitung():
    # error negatif -->
    mf1 = max(min(min((error-a)/(b-a),(d-error)/(d-c)),1),0)

    # error positif kecil -->
    mf2 = max(min((error-a1)/(b1-a1),(c1-error)/(c1-b1)),0)
  
    # error positif sedangf -->
    mf3 = max(min((error-a2)/(b2-a2),(c2-error)/(c2-b2)),0)

    # error positif besar -->
    mf4 = max(min(min((error-a3)/(b3-a3),(d3-error)/(d3-c3)),1),0)

def fuzzy_rule():
  # menerapkan hasil perhitungan membership function ke aturan
  hitung()    # memanggil fungsi hitung()
  r1 = mf1*u1 # jika error negatif, maka aktuator off
  r2 = mf2*u2 # jika error positif kecil, maka aktuator on sebentar
  r3 = mf3*u3 # jika error positif sedang, maka aktuator on sedang
  r4 = mf4*u4 # jika error positif besar, maka aktuator on lama

def defuzzyfikasi():
  # defuzzyfikasi
  fuzzy_rule() # memanggil fungsi fuzzy_rule()
  u = (r1+r2+r3+r4)/(mf1+mf2+mf3+mf4)
  return u

# main program :
sp = float(input("Masukkan nilai Set point = "))
nilaiAktual = float(input("Masukkan suhu aktual : "))
error = sp - nilaiAktual
print(f"Error = {error} ")

# panggil fungsi defuzzyfikasi
defuzzyfikasi()

# print nilai membership function
print(f"""Nilai mf1 : {mf}
      Nilai mf2 : {mf2} 
      Nilai mf3 : {mf3} 
      Nilai mf4 : {mf4} 
      """)

# print nilai defuzzyfikasi
print(f"Nilai Deffuzy {u}")

# membuat hasil defuzzyfikasi menjadi pwm untuk mengatur ssr 
sisa = 1000 - u;
print(f"""  waktu untuk ssr on {u} milisecond 
sedangkan waktu untuk ssr off {sisa} milisecond """)


