from sklearn.ensemble import RandomForestClassifier
from sklearn.model_selection import train_test_split
# Загрузка данных
X, y = ... # Ваши данные
X_train, X_test, y_train, y_test = train_test_split(X, y, test_size=0.2)
# Создание модели
model = RandomForestClassifier(
    n_estimators=200,
    max_depth=10,
    max_features='sqrt',
    oob_score=True
)
# Обучение
model.fit(X_train, y_train)
# Оценка качества
print("OOB-точность:", model.oob_score_)
print("Точность на тесте:", model.score(X_test, y_test))
# Важность признаков
importances = model.feature_importances_
