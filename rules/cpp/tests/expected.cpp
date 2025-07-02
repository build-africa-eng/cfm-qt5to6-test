#include <QMap>

void demo() {
    QMap<QString, int> map;
    auto keys = /* Qt6: consider using QMap::keyValueBegin() */ map.keys(); // deprecated in Qt6
}
