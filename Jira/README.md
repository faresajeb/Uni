# Workforce Management Test Data – Time Management Test

This repository contains **JSON files** designed to simulate **workforce management and time tracking** in Jira Cloud.

The data was created for a team project to test Jira’s **time management features, worklogs, and reporting capabilities** with realistic sample data.

---

## 📌 Project Objective

The goal of this project was to set up a **test Jira environment** and bulk import **issues and worklogs** in order to:

* Simulate daily worklogs across multiple users
* Evaluate Jira’s **time tracking** and **reporting**
* Experiment with **automation** using REST API and JSON import

---

## 🛠️ What’s Included

* **`ImportWorklogsToJira.json`**
  JSON file containing project data with:

  * 30+ sample Jira issues (Tasks)
  * Worklogs for multiple users, with realistic `timeSpent`, `startDate`, and `author` IDs
  * Simulation of daily entries from **January–September 2025**

* Documentation explaining the process we followed

---

## 🗂️ Project Setup in Jira

1. **Create a new Jira project**

   * Project name: `Time Management Test`
   * Project key: `TMT`

2. **Import issues**

   * Use Jira’s **JSON import** feature under *Jira Cloud Administration*
   * Select the JSON file from this repo

3. **Review worklogs**

   * Open imported issues and verify that worklogs (`author`, `comment`, `timeSpent`, `startDate`) are correctly attached

---

## 📖 Example Worklog Entry

```json
{
  "author": "712020:d22a05c0-0159-4539-b466-bdc5a08da512",
  "comment": "Fixed bug",
  "startDate": "2025-09-29T09:00:00.000+0000",
  "timeSpent": "PT3H"
}
```

---

## 🚀 Why This Matters

This project simulates **realistic workforce activity** inside Jira to test:

* **Workload distribution across team members**
* **Time reporting** and tracking features
* **Automation potential** with REST API

---

👥 Contributors

Fares Ajeb,
Amaan Memon
