private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
    // Credenciales correctas
    String^ correctEmail = "email@email.com";
    String^ correctPassword = "password123";

    // Leer los valores ingresados en los TextBoxes
    String^ email = txtMail->Text;
    String^ password = textUser->Text;

    // Validar credenciales
    if (email == correctEmail && password == correctPassword) {
        // Si son correctas, concatenamos el email y lo pasamos a la siguiente ventana
        String^ paraEnviar = email;
        MyForm1^ Inicio = gcnew MyForm1(paraEnviar);

        // Ocultamos el formulario de login y mostramos el segundo formulario
        this->Hide(); // Oculta este formulario permanentemente
        Inicio->ShowDialog();

        // Opcional: cerrar el formulario de login al cerrar la segunda ventana
        this->Close();
    }
    else {
        // Si las credenciales no son correctas, mostramos un mensaje de error
        MessageBox::Show("Email o contraseña incorrectos.", "Error de autenticación", MessageBoxButtons::OK, MessageBoxIcon::Error);
    }
}

