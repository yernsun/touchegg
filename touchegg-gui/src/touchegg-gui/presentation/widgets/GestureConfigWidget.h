/**
 * @file /src/touchegg-gui/presentation/widgets/GestureConfig.h
 *
 * @~spanish
 * Este archivo es parte del proyecto Touchégg-GUI, usted puede redistribuirlo
 * y/o modificarlo bajo los téminos de la licencia GNU GPL v3.
 *
 * @~english
 * This file is part of the Touchégg-GUI project, you can redistribute it and/or
 * modify it under the terms of the GNU GPL v3.
 *
 * @class  GestureConfig
 * @author José Expósito
 */
#ifndef GESTURECONFIG_H
#define GESTURECONFIG_H

#include "src/touchegg-gui/util/Include.h"
#include "src/touchegg-gui/logic/type/GestureTypeEnum.h"
#include "src/touchegg-gui/logic/type/ActionTypeEnum.h"

/**
 * @~spanish
 * Widget con la imagen del geso a configurar, la acción asociada al mismo y
 * un botón para editar las propiedades de la acción.
 *
 * @~english
 * Widget with the gesture image to configure, the associated action and a
 * button to edit the action settings.
 */
class GestureConfigWidget : public QFrame {

    Q_OBJECT

    private:

        /**
         * @~spanish
         * Gesto que configurará el widget.
         *
         * @~english
         * Gesture that set up the widget.
         */
        GestureTypeEnum::GestureType gestureType;

        /**
         * @~spanish
         * Acción asociada al gesto.
         *
         * @~english
         * Action associated with the gesture.
         */
        ActionTypeEnum::ActionType asociatedAction;

        /**
         * @~spanish
         * Configuración de la acción.
         *
         * @~english
         * Action settings.
         */
        QString actionSettings;

        //----------------------------------------------------------------------

        /**
         * @~spanish
         * Label con la imagen del gesto a configurar.
         *
         * @~english
         * Label with the image of the gesture to confiure.
         */
        QLabel* gestureLabel;

        /**
         * @~spanish
         * ComboBox con las acciones que se pueden asociar al gesto.
         *
         * @~english
         * ComboBox with the actions that can be associated to the gesture.
         */
        QComboBox* allowedActionsCombo;

        /**
         * @~spanish
         * Botón para configurar la acción elegida.
         *
         * @~english
         * Button to configure the selected action.
         */
        QPushButton* configButton;

    public:

        /**
         * @~spanish
         * Constructor.
         * @param gestureType    Tipo del gesto a configurar.
         * @param gestureImage   Ruta de la imagen del gesto.
         * @param allowedActions Acciones que se pueden asociar al gesto.
         *
         * @~english
         * Constructor.
         * @param gestureType    Gesture type to configure.
         * @param gestureImage   Path of the gesture image.
         * @param allowedActions Actions that can be associated to the gesture.
         */
        GestureConfigWidget(GestureTypeEnum::GestureType gestureType,
                const QString& gestureImage, const QStringList& allowedActions);

        /**
         * @~spanish
         * Destructor.
         *
         * @~english
         * Destructor.
         */
        ~GestureConfigWidget();

        //----------------------------------------------------------------------


        /**
         * @~spanish
         * Devuelve el gesto que configurará el widget.
         * @return El gesto.
         *
         * @~english
         * Returns the gesture that set up the widget.
         * @return The gesture.
         */
        GestureTypeEnum::GestureType getGestureType() const;

        /**
         * @~spanish
         * Devuelve la acción asociada al gesto.
         * @return La acción.
         *
         * @~english
         * Returns the action associated with the gesture.
         * @return The action.
         */
        ActionTypeEnum::ActionType getAsociatedAction() const;

        /**
         * @~spanish
         * Devuelve la configuración de la acción.
         * @return La configuración.
         *
         * @~english
         * Returns the action settings.
         * @return The settings.
         */
        QString getActionSettings() const;

};

#endif // GESTURECONFIG_H