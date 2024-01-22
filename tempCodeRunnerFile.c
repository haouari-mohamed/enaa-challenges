
    }
    for (i = 2; i <= n / 2; ++i) {
        // si n est divisible par i, alors n n'est pas premier
        // changez le drapeau à 1 pour les nombres non premiers
        if (n % i == 0) {
            flag = 1;
            break;
        }
    }
    if (flag == 0) {
        printf("%d est un nombre premier.", n);
    } else {
        printf("%d n'est pas un nombre premier.", n);
    }
    return 0;
}

Ce programme utilise une boucle for pour vérifier si l’entier donné est divisible par un nombre autre que 1 et lui-même. Si tel est le cas, le drapeau est défini sur 1, ce qui indique que l’entier n’est pas premier. Si le drapeau est toujours à 0 après la boucle, cela signifie que l’entier est premier.

J’espère que cela vous aide! N’hésitez pas à me poser des questions si vous avez besoin de plus d’explications.