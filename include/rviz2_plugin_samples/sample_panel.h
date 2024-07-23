#ifndef MY_RVIZ_PLUGIN__MY_PANEL_H
#define MY_RVIZ_PLUGIN__MY_PANEL_H

#include <rviz_common/panel.hpp>
#include <QPushButton>

namespace rviz2_plugin_samples
{

class ButtonPanel : public rviz_common::Panel
{
	Q_OBJECT
public:
	ButtonPanel(QWidget *parent = 0);

protected Q_SLOTS:
	void onButtonClick();

protected:
	QPushButton *button_;
};

}  // namespace my_rviz_plugin

#endif  // MY_RVIZ_PLUGIN__MY_PANEL_H
