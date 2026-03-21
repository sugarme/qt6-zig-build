// Compat header for QtCharts MOC - declare opaque pointer types
// for forward-declared classes used in Q_PROPERTY
#include <QtCore/qmetatype.h>

QT_BEGIN_NAMESPACE
class QAbstractBarSeries;
class QAbstractItemModel;
class QBoxPlotSeries;
class QPieSeries;
class QXYSeries;
class QCandlestickSeries;
class QLineSeries;
Q_DECLARE_OPAQUE_POINTER(QAbstractBarSeries*)
Q_DECLARE_OPAQUE_POINTER(QAbstractItemModel*)
Q_DECLARE_OPAQUE_POINTER(QBoxPlotSeries*)
Q_DECLARE_OPAQUE_POINTER(QPieSeries*)
Q_DECLARE_OPAQUE_POINTER(QXYSeries*)
Q_DECLARE_OPAQUE_POINTER(QCandlestickSeries*)
Q_DECLARE_OPAQUE_POINTER(QLineSeries*)
QT_END_NAMESPACE
