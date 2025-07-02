# 🧪 CFM Qt5 to Qt6 Test

> This repository tests rule-based transformations for migrating Qt5 to Qt6 using [CodeFixit Manager](https://github.com/build-africa-eng/codefixit-manager).

## 🔧 Rule Tested

Replace `QMap::keys()` with a Qt6-safe alternative.

## 📁 Structure

- `rules/cpp/qt5to6/qt5to6.json` – The rule
- `rules/cpp/qt5to6/tests/input.cpp` – Legacy input
- `rules/cpp/qt5to6/tests/expected.cpp` – Expected result

## 🚀 Run Locally

```bash
pip install codefixit-manager
cfm test --rule rules/cpp/qt5to6/qt5to6.json --test-dir rules/cpp/qt5to6/tests
