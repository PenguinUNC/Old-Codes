while not converged:
    # Шаг 1: Назначение точек
    for each point x in data:
        assign x to cluster with nearest centroid
    # Шаг 2: Пересчет центроидов
    for each cluster:
        centroid = mean of all points in the cluster
