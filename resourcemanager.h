#ifndef RESOURCEMANAGER_H
#define RESOURCEMANAGER_H

#include <QImage>

class ResourceManager
{
public:
    static ResourceManager *instance();

    const QImage &grassTexture(int level) const;
    const QImage &waterTexture() const;
    const QImage &rockTexture() const;

    const QImage &sunIcon() const;
    const QImage &rainIcon() const;
    const QImage &grassIcon() const;

    const QImage &rabbitIcon() const;

private:
    ResourceManager();

    static ResourceManager *m_instance;

    QImage texGrass[6];
    QImage texWater, texRock;
    QImage iconSun, iconRain, iconGrass;
    QImage iconRabbit;
};

#endif // RESOURCEMANAGER_H
