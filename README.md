# ROT-13 Encryption/Decryption Tool
A simple command-line encryption program created by **Michael Black**.  
This tool takes a user-entered message and applies a ROT-13 transformation, shifting each alphabetical character by 13 positions.  
Letters preserve their case, spaces remain unchanged, and invalid characters are safely handled.

---

## 📌 Features
- 🔐 **ROT-13 encryption** (letters rotate 13 positions)
- 🔐 **ROT-13 decryption** (letters rotate 13 positions)
- 📝 **Full-sentence input support**
- ⚠️ **Automatic error handling** for invalid characters  
  - Unsupported characters are replaced with `'?'`
- 🎨 **Clean terminal UI** with banners and prompts
- 🧱 **Simple, readable code structure**
- 🛡️ **Never crashes on unexpected input**

---

## 🧠 How ROT-13 Works
ROT-13 is a substitution cipher that shifts each letter:

- Uppercase stays uppercase  
- Lowercase stays lowercase  
- Non-letters (except spaces and periods) become `?`

---
