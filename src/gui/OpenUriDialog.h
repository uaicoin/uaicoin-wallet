// Copyright (c) 2016 - 2018 Niobio developers - Derived work from -Karbowanec-
// Distributed under the MIT/X11 software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#pragma once

#include <QDialog>

namespace Ui {
class OpenUriDialog;
}

namespace WalletGui {

class OpenUriDialog : public QDialog {
  Q_OBJECT

public:
  OpenUriDialog(QWidget* _parent);
  ~OpenUriDialog();

  QString getURI() const;

private:
  QScopedPointer<Ui::OpenUriDialog> m_ui;
};

}
