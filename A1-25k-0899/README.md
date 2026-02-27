# 🚗 Online Car Marketplace System
### Object-Oriented Programming (C++) Project

---

## 📌 Project Overview

This project is a console-based simulation of an online car marketplace system inspired by the functional structure of PakWheels (Pakistani automotive marketplace).

The system reverse-engineers core marketplace behavior and implements it using Object-Oriented Programming (OOP) principles in C++.

> Note: This is an academic simulation project and is not affiliated with the original platform.

---

## 🎯 Project Objectives

- Apply OOP principles in a real-world inspired system
- Practice reverse engineering of a web platform
- Implement inheritance, composition, aggregation, and association
- Design modular C++ architecture
- Demonstrate clean file structure and separation of concerns

---

## 🏗 System Architecture

The system models the following entities:

- User (Base Class)
- Buyer
- Seller
- Admin
- Listing
- Vehicle
- CarSpecification
- FavoriteList
- Message
- MarketplaceSystem

---

## 👥 User Roles

### 🔹 User (Abstract Base Class)
Common attributes:
- userId
- name
- city

Defines shared interface for all user types.

---

### 🔹 Buyer
Capabilities:
- View listings
- Add listings to favorites
- Send message to seller

---

### 🔹 Seller
Capabilities:
- Create and publish listings

---

### 🔹 Admin
Capabilities:
- Approve listings
- Remove listings
- Moderate marketplace content

(Admin functionality is simulated based on observable moderation behavior.)

---

## 🚘 Core Features

### ✔ Car Listings
Each listing contains:
- Vehicle information
- Car specifications
- Price
- City
- Approval status

Listings are managed by `MarketplaceSystem`.

---

### ✔ Favorites System
Buyers can save listings.

Relationship type:
Aggregation (Buyer references Listing)

---

### ✔ Messaging System
Buyers can contact sellers.

Message includes:
- senderId
- receiverId
- message content
- read status

Relationship type:
Association between users.

---

### ✔ Admin Moderation
Admin can:
- Approve listing
- Remove listing
- Control marketplace integrity

---

## 🧠 OOP Concepts Used

| Concept        | Implementation |
|---------------|---------------|
| Encapsulation | Private data members |
| Inheritance   | User → Buyer, Seller, Admin |
| Polymorphism  | Virtual functions |
| Composition   | Listing contains Vehicle & CarSpecification |
| Aggregation   | Buyer references Listing |
| Association   | Message connects Users |
| Static Members| totalListings counter |

---

## 📂 Project Structure
OnlineCarMarketplace/
│
├── main.cpp
├── MarketplaceSystem.h / .cpp
├── User.h / .cpp
├── Buyer.h / .cpp
├── Seller.h / .cpp
├── Admin.h / .cpp
├── Listing.h / .cpp
├── Vehicle.h / .cpp
├── CarSpecification.h / .cpp
├── Message.h / .cpp
├── FavoriteList.h / .cpp
└── README.md


---

## ⚙ How to Compile

Using g++:

```bash
g++ *.cpp -o marketplace
./marketplace

Or compile using any C++ IDE.

📊 Design Decisions

Inheritance reduces redundancy and models real-world hierarchy.

Composition ensures strong ownership (Listing → Vehicle).

Aggregation allows independent object existence (Buyer → Listing).

Pointer-based storage avoids object slicing and supports polymorphism.

🚀 Future Improvements

File handling for persistent storage

Search and filter system

Graphical User Interface (GUI)

Database integration

Payment module simulation

🎓 Learning Outcomes

Practical implementation of OOP

UML to code mapping

Memory management with pointers

Modular software architecture

Real-world system modeling

👨‍💻 Author

Muhammad Anas
BS Computer Science