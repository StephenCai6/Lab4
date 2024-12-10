#ifndef CHATCLIENT_H
#define CHATCLIENT_H

#include <QObject>
#include <QTcpSocket>

class ChatClient : public QObject
{
    Q_OBJECT
public:
    explicit ChatClient(QObject *parent = nullptr);
signals:
    void connected();
    void messageRecevied(const QString &text);
    void jsonReceived(const QJsonObject &docObj);
private:
    QTcpSocket  *m_clientSocket;
public:
    void onReadyRead();
    void sendMessage(const QString &text,const QString &type="message");
    void connectToServer(const QHostAddress &address,quint16 port);
    // void jsonToReceived(const QJsonObject &docObj);
    void disconnectFromHost();

signals:
};

#endif // CHATCLIENT_H
