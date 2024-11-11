import qrcode

text = "Wanna contact Faisal, really..??? Whyyyy!!!??"

qr = qrcode.QRCode(
    version=1,
    error_correction=qrcode.constants.ERROR_CORRECT_L,  #7% or less error correction
    box_size=10,
    border=3,  
)
qr.add_data(text)
qr.make(fit=True)
img = qr.make_image(fill='black', back_color='white')
img.save("faisal-qr.png")

print("QR Code generated and saved as 'faisal-qr.png'")
